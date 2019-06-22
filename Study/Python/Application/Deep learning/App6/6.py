import tensorflow as tf

# Model parameter

w = tf.compat.v1.Variable( [.3] , tf.float32 )
b = tf.compat.v1.Variable( [-.3] , tf.float32 )

# w = -1 b = 1

# Input & output

x = tf.compat.v1.placeholder(tf.float32)

linear_model = w * x + b

y = tf.compat.v1.placeholder(tf.float32)

# Loss function

squared_delta = tf.square(linear_model - y)
loss = tf.reduce_sum(squared_delta)


# Optimizer

optimizer = tf.compat.v1.train.GradientDescentOptimizer(0.01)
train = optimizer.minimize(loss)

init = tf.global_variables_initializer()

# Run Computation graph

sobj = tf.compat.v1.Session()
sobj.run(init)

for i in range(1000):
	sobj.run(train , { x :[1,2,3,4] , y :[0,-1,-2,-3] } )

print(sobj.run ([w,b]) )
sobj.close()