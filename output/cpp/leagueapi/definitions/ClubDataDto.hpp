#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/ClubPermissions.hpp>

namespace leagueapi {
  struct ClubDataDto { /**/ 
    std::string clubKey;/**/
    std::string tag;/**/
    std::string motd;/**/
    ClubPermissions permissionMap;/**/
    std::string description;/**/
    int64_t createdTs;/**/
    int64_t lastModifiedTs;/**/
    std::string name;/**/
    std::string role;/**/
    std::string jid;/**/
  };
  static void to_json(json& j, const ClubDataDto& v) { 
    j["clubKey"] = v.clubKey;
    j["tag"] = v.tag;
    j["motd"] = v.motd;
    j["permissionMap"] = v.permissionMap;
    j["description"] = v.description;
    j["createdTs"] = v.createdTs;
    j["lastModifiedTs"] = v.lastModifiedTs;
    j["name"] = v.name;
    j["role"] = v.role;
    j["jid"] = v.jid;
  }
  static void from_json(const json& j, ClubDataDto& v) { 
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.tag = j.at("tag").get<std::string>(); 
    v.motd = j.at("motd").get<std::string>(); 
    v.permissionMap = j.at("permissionMap").get<ClubPermissions>(); 
    v.description = j.at("description").get<std::string>(); 
    v.createdTs = j.at("createdTs").get<int64_t>(); 
    v.lastModifiedTs = j.at("lastModifiedTs").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.role = j.at("role").get<std::string>(); 
    v.jid = j.at("jid").get<std::string>(); 
  }
} 