#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ClubPermissions { /**/ 
    std::vector<std::string> INVITEE;/**/
    std::vector<std::string> OFFICER;/**/
    std::vector<std::string> ADMIN;/**/
    std::vector<std::string> UNKNOWN;/**/
    std::vector<std::string> MEMBER;/**/
    std::vector<std::string> OWNER;/**/
  };
  static void to_json(json& j, const ClubPermissions& v) { 
    j["INVITEE"] = v.INVITEE;
    j["OFFICER"] = v.OFFICER;
    j["ADMIN"] = v.ADMIN;
    j["UNKNOWN"] = v.UNKNOWN;
    j["MEMBER"] = v.MEMBER;
    j["OWNER"] = v.OWNER;
  }
  static void from_json(const json& j, ClubPermissions& v) { 
    v.INVITEE = j.at("INVITEE").get<std::vector<std::string>>(); 
    v.OFFICER = j.at("OFFICER").get<std::vector<std::string>>(); 
    v.ADMIN = j.at("ADMIN").get<std::vector<std::string>>(); 
    v.UNKNOWN = j.at("UNKNOWN").get<std::vector<std::string>>(); 
    v.MEMBER = j.at("MEMBER").get<std::vector<std::string>>(); 
    v.OWNER = j.at("OWNER").get<std::vector<std::string>>(); 
  }
} 