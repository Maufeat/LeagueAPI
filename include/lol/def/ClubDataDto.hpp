#pragma once
#include "../base_def.hpp" 
#include "ClubPermissions.hpp"
namespace lol {
  struct ClubDataDto { 
    int64_t lastModifiedTs;
    std::string motd;
    std::string name;
    std::string description;
    std::string role;
    std::string clubKey;
    int64_t createdTs;
    std::string jid;
    ClubPermissions permissionMap;
    std::string tag; 
  };
  inline void to_json(json& j, const ClubDataDto& v) {
    j["lastModifiedTs"] = v.lastModifiedTs; 
    j["motd"] = v.motd; 
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["role"] = v.role; 
    j["clubKey"] = v.clubKey; 
    j["createdTs"] = v.createdTs; 
    j["jid"] = v.jid; 
    j["permissionMap"] = v.permissionMap; 
    j["tag"] = v.tag; 
  }
  inline void from_json(const json& j, ClubDataDto& v) {
    v.lastModifiedTs = j.at("lastModifiedTs").get<int64_t>(); 
    v.motd = j.at("motd").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.role = j.at("role").get<std::string>(); 
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.createdTs = j.at("createdTs").get<int64_t>(); 
    v.jid = j.at("jid").get<std::string>(); 
    v.permissionMap = j.at("permissionMap").get<ClubPermissions>(); 
    v.tag = j.at("tag").get<std::string>(); 
  }
}