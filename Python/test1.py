import matplotlib.pyplot as plt
import networkx as nx

# Generate sample data for visualization
# Replace this with your actual data generation logic
def generate_data():
    acl_data = {
        'Allow_ICMP': ['10 permit icmp'],
        'Block_ICMP': ['10 deny icmp'],
        'Block_Malware': ['10 deny 45', '20 deny 93']
    }
    cts_data = {
        'Allow_ICMP': ['9', '4'],
        'Block_Malware': ['5', '5'],
        'Block_ICMP': ['5', '4'],
        'Block_ICMP': ['4', '9'],
        'Block_ICMP_2': ['4', '5'],
        'Allow_Malware': ['4', '4']
    }
    return acl_data, cts_data

# Generate data
acl_data, cts_data = generate_data()

# Visualization using NetworkX and Matplotlib
G = nx.Graph()

# Add nodes for ACLs
G.add_nodes_from(acl_data.keys())

# Add nodes for CTS role-based permissions
G.add_nodes_from(cts_data.keys())

# Add edges between ACLs and CTS role-based permissions
for acl, cts in cts_data.items():
    G.add_edge(acl, cts[0])
    G.add_edge(acl, cts[1])

# Position nodes using spring layout
pos = nx.spring_layout(G)

# Draw ACL nodes
nx.draw_networkx_nodes(G, pos, nodelist=acl_data.keys(), node_color='lightblue', node_size=500, label='ACLs')

# Draw CTS nodes
nx.draw_networkx_nodes(G, pos, nodelist=cts_data.keys(), node_color='lightgreen', node_size=500, label='CTS Permissions')

# Draw edges
nx.draw_networkx_edges(G, pos)

# Label nodes
nx.draw_networkx_labels(G, pos)

# Display legend
plt.legend()

# Display the visualization
plt.show()