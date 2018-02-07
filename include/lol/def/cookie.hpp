#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct cookie { 
    std::string url;
    std::string name;
    std::string value;
    std::string domain;
    std::string path;
    bool secure;
    bool httponly;
    std::optional<int64_t> expires; 
  };
  inline void to_json(json& j, const cookie& v) {
    j["url"] = v.url; 
    j["name"] = v.name; 
    j["value"] = v.value; 
    j["domain"] = v.domain; 
    j["path"] = v.path; 
    j["secure"] = v.secure; 
    j["httponly"] = v.httponly; 
    if(v.expires)
      j["expires"] = *v.expires;
  }
  inline void from_json(const json& j, cookie& v) {
    v.url = j.at("url").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.value = j.at("value").get<std::string>(); 
    v.domain = j.at("domain").get<std::string>(); 
    v.path = j.at("path").get<std::string>(); 
    v.secure = j.at("secure").get<bool>(); 
    v.httponly = j.at("httponly").get<bool>(); 
    if(auto it = j.find("expires"); it != j.end() && !it->is_null())
      v.expires = it->get<std::optional<int64_t>>(); 
  }
}