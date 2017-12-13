#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct MembershipNoficationsDto { 
    std::string clubKey;
    std::string action;
    std::string role;
    std::string status;
    std::string name; 
  };
  void to_json(json& j, const MembershipNoficationsDto& v) {
  j["clubKey"] = v.clubKey; 
  j["action"] = v.action; 
  j["role"] = v.role; 
  j["status"] = v.status; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, MembershipNoficationsDto& v) {
  v.clubKey = j.at("clubKey").get<std::string>(); 
  v.action = j.at("action").get<std::string>(); 
  v.role = j.at("role").get<std::string>(); 
  v.status = j.at("status").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}