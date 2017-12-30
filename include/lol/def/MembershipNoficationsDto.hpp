#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MembershipNoficationsDto { 
    std::string name;
    std::string action;
    std::string status;
    std::string clubKey;
    std::string role; 
  };
  inline void to_json(json& j, const MembershipNoficationsDto& v) {
    j["name"] = v.name; 
    j["action"] = v.action; 
    j["status"] = v.status; 
    j["clubKey"] = v.clubKey; 
    j["role"] = v.role; 
  }
  inline void from_json(const json& j, MembershipNoficationsDto& v) {
    v.name = j.at("name").get<std::string>(); 
    v.action = j.at("action").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.role = j.at("role").get<std::string>(); 
  }
}