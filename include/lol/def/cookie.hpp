#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct cookie { 
    std::string domain;
    std::string value;
    std::optional<int64_t> expires;
    std::string name;
    bool httponly;
    bool secure;
    std::string url;
    std::string path; 
  };
  inline void to_json(json& j, const cookie& v) {
    j["domain"] = v.domain; 
    j["value"] = v.value; 
    if(v.expires)
      j["expires"] = *v.expires;
    j["name"] = v.name; 
    j["httponly"] = v.httponly; 
    j["secure"] = v.secure; 
    j["url"] = v.url; 
    j["path"] = v.path; 
  }
  inline void from_json(const json& j, cookie& v) {
    v.domain = j.at("domain").get<std::string>(); 
    v.value = j.at("value").get<std::string>(); 
    if(auto it = j.find("expires"); it != j.end() && !it->is_null())
      v.expires = it->get<std::optional<int64_t>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.httponly = j.at("httponly").get<bool>(); 
    v.secure = j.at("secure").get<bool>(); 
    v.url = j.at("url").get<std::string>(); 
    v.path = j.at("path").get<std::string>(); 
  }
}