#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct cookie { 
    std::string name;
    bool secure;
    bool httponly;
    std::string path;
    std::string domain;
    std::string value;
    std::string url;
    std::optional<int64_t> expires; 
  };
  inline void to_json(json& j, const cookie& v) {
    j["name"] = v.name; 
    j["secure"] = v.secure; 
    j["httponly"] = v.httponly; 
    j["path"] = v.path; 
    j["domain"] = v.domain; 
    j["value"] = v.value; 
    j["url"] = v.url; 
    if(v.expires)
      j["expires"] = *v.expires;
  }
  inline void from_json(const json& j, cookie& v) {
    v.name = j.at("name").get<std::string>(); 
    v.secure = j.at("secure").get<bool>(); 
    v.httponly = j.at("httponly").get<bool>(); 
    v.path = j.at("path").get<std::string>(); 
    v.domain = j.at("domain").get<std::string>(); 
    v.value = j.at("value").get<std::string>(); 
    v.url = j.at("url").get<std::string>(); 
    if(auto it = j.find("expires"); it != j.end() && !it->is_null())
      v.expires = it->get<std::optional<int64_t>>(); 
  }
}