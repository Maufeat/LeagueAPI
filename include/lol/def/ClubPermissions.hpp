#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ClubPermissions { 
    std::vector<std::string> ADMIN;
    std::vector<std::string> OWNER;
    std::vector<std::string> OFFICER;
    std::vector<std::string> MEMBER;
    std::vector<std::string> INVITEE;
    std::vector<std::string> UNKNOWN; 
  };
  inline void to_json(json& j, const ClubPermissions& v) {
    j["ADMIN"] = v.ADMIN; 
    j["OWNER"] = v.OWNER; 
    j["OFFICER"] = v.OFFICER; 
    j["MEMBER"] = v.MEMBER; 
    j["INVITEE"] = v.INVITEE; 
    j["UNKNOWN"] = v.UNKNOWN; 
  }
  inline void from_json(const json& j, ClubPermissions& v) {
    v.ADMIN = j.at("ADMIN").get<std::vector<std::string>>(); 
    v.OWNER = j.at("OWNER").get<std::vector<std::string>>(); 
    v.OFFICER = j.at("OFFICER").get<std::vector<std::string>>(); 
    v.MEMBER = j.at("MEMBER").get<std::vector<std::string>>(); 
    v.INVITEE = j.at("INVITEE").get<std::vector<std::string>>(); 
    v.UNKNOWN = j.at("UNKNOWN").get<std::vector<std::string>>(); 
  }
}