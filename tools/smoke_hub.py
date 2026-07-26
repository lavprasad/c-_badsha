import json
import urllib.request

def get(url):
    with urllib.request.urlopen(url) as r:
        return json.load(r)

def post(url, payload):
    data = json.dumps(payload).encode()
    req = urllib.request.Request(url, data=data, headers={"Content-Type": "application/json"})
    with urllib.request.urlopen(req) as r:
        return json.load(r)

print("health", get("http://127.0.0.1:8765/api/health"))
days = get("http://127.0.0.1:8765/api/days")
print("days", len(days["days"]), "gpp", days.get("gpp"))
print("help", get("http://127.0.0.1:8765/api/help?topic=pointer")["title"])
print("search hits", len(get("http://127.0.0.1:8765/api/search?q=vector")["hits"]))
day1 = get("http://127.0.0.1:8765/api/day/1")
print("day1 theme", day1["theme"], "examples", len(day1["examples"]))
src = '#include <iostream>\nint main(){ std::cout << 42; return 0; }\n'
print("compile", post("http://127.0.0.1:8765/api/compile", {"source": src}))
