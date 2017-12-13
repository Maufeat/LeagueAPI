#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct MembershipNoficationsDto { 
    std::string action;
    std::string name;
    std::string status;
    std::string clubKey;
    std::string role; 
  };
  void to_json(json& j, const MembershipNoficationsDto& v) {
    j["action"] = v.action; 
    j["name"] = v.name; 
    j["status"] = v.status; 
    j["clubKey"] = v.clubKey; 
    j["role"] = v.role; 
  }
  void from_json(const json& j, MembershipNoficationsDto& v) {
    v.action = j.at("action").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.role = j.at("role").get<std::string>(); 
  }
}