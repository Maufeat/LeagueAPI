#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct cookie { 
    std::string domain;
    bool secure;
    bool httponly;
    std::string path;
    std::string name;
    std::string value;
    std::string url;
    std::optional<int64_t> expires; 
  };
  void to_json(json& j, const cookie& v) {
    j["domain"] = v.domain; 
    j["secure"] = v.secure; 
    j["httponly"] = v.httponly; 
    j["path"] = v.path; 
    j["name"] = v.name; 
    j["value"] = v.value; 
    j["url"] = v.url; 
    if(v.expires)
      j["expires"] = *v.expires;
  }
  void from_json(const json& j, cookie& v) {
    v.domain = j.at("domain").get<std::string>(); 
    v.secure = j.at("secure").get<bool>(); 
    v.httponly = j.at("httponly").get<bool>(); 
    v.path = j.at("path").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.value = j.at("value").get<std::string>(); 
    v.url = j.at("url").get<std::string>(); 
    if(auto it = j.find("expires"); it != j.end() && !it->is_null())
      v.expires = it->get<std::optional<int64_t>>(); 
  }
}