n = int(input().strip())
requests = []
for _ in range(n):
    requests.append(input().strip())

registered_names = set()
response = []

for name in requests:
    if name not in registered_names:
        registered_names.add(name)
        response.append("OK")
    else:
        i = 1
        while True:
            new_name = f"{name}{i}"
            if new_name not in registered_names:
                registered_names.add(new_name)
                response.append(new_name)
                break
            i += 1

for result in response:
    print(result)
