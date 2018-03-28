from collections import defaultdict
 
class Graph():
    def __init__(self, V):
        self.V = V
        self.graph = defaultdict(list)
 
    def addEdge(self, u, v):
        self.graph[u].append(v)
 
    def DFSUtil(self, u, color):
       
        color[u] = "GRAY"
 
        for v in self.graph[u]:
 
            if color[v] == "GRAY":
                return True
 
            if color[v] == "WHITE" and self.DFSUtil(v, color) == True:
                return True
 
        color[u] = "BLACK"
        return False
 
    def isCyclic(self):
        color = ["WHITE"] * self.V
 
        for i in range(self.V):
            if color[i] == "WHITE":
                if self.DFSUtil(i, color) == True:
                    return True
        return False
 

 
g = Graph(4)
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(1, 2)

g.addEdge(2, 3)
g.addEdge(3, 3)
print "Graph doesnt contains cycle" if g.isCyclic() == True\
                             else "Graph doesn't conatin cycle"
