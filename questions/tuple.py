def count_size(pa, pb):
    print pa
    print pb
    print ((pa[0] - pb[0])**2 + (pa[1] - pb[1])**2)**0.5

if __name__ == '__main__':
    count_size((1, 1), (1, 4))

####################################################
# <============OUTPUT===============>              #
# c:\code\lwx-in-action\questions>python tuple.py  #
# (1, 1)                                           #
# (1, 4)                                           #
# 3.0                                              #
####################################################
