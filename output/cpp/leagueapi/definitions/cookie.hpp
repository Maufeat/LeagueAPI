#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct cookie { /**/ 
    std::string url;/**/
    bool httponly;/**/
    std::string path;/**/
    std::string value;/**/
    std::string domain;/**/
    std::string name;/**/
    std::optional<int64_t> expires;/**/
    bool secure;/**/
  };
  static void to_json(json& j, const cookie& v) { 
    j["url"] = v.url;
    j["httponly"] = v.httponly;
    j["path"] = v.path;
    j["value"] = v.value;
    j["domain"] = v.domain;
    j["name"] = v.name;
    j["expires"] = v.expires;
    j["secure"] = v.secure;
  }
  static void from_json(const json& j, cookie& v) { 
    v.url = j.at("url").get<std::string>(); 
    v.httponly = j.at("httponly").get<bool>(); 
    v.path = j.at("path").get<std::string>(); 
    v.value = j.at("value").get<std::string>(); 
    v.domain = j.at("domain").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.expires = j.at("expires").get<std::optional<int64_t>>(); 
    v.secure = j.at("secure").get<bool>(); 
  }
} 