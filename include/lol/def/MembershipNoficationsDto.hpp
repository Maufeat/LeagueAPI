#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MembershipNoficationsDto { 
    std::string role;
    std::string clubKey;
    std::string action;
    std::string status;
    std::string name; 
  };
  inline void to_json(json& j, const MembershipNoficationsDto& v) {
    j["role"] = v.role; 
    j["clubKey"] = v.clubKey; 
    j["action"] = v.action; 
    j["status"] = v.status; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, MembershipNoficationsDto& v) {
    v.role = j.at("role").get<std::string>(); 
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.action = j.at("action").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}