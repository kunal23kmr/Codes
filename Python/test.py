from heapq import *


def get_server_index(num_servers, arrival_times, burst_times):
    num_processes = len(arrival_times)
    available_servers = list(range(1, num_servers + 1))
    processes = []
    heapify(available_servers)
    result = [0] * num_processes

    for arrival, process_index, burst_time in sorted(zip(arrival_times, list(range(num_processes)), burst_times)):
        while processes and processes[0][0] <= arrival:
            heappush(available_servers, heappop(processes)[1])
        if available_servers:
            server = heappop(available_servers)
            result[process_index] = server
            heappush(processes, (arrival + burst_time, server))
        else:
            result[process_index] = -1

    return result
