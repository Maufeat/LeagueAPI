#pragma once
#include "../base_def.hpp" 
#include "ClubPermissions.hpp"
namespace lol {
  struct ClubDataDto { 
    std::string name;
    int64_t createdTs;
    std::string jid;
    std::string tag;
    ClubPermissions permissionMap;
    std::string description;
    int64_t lastModifiedTs;
    std::string role;
    std::string clubKey;
    std::string motd; 
  };
  inline void to_json(json& j, const ClubDataDto& v) {
    j["name"] = v.name; 
    j["createdTs"] = v.createdTs; 
    j["jid"] = v.jid; 
    j["tag"] = v.tag; 
    j["permissionMap"] = v.permissionMap; 
    j["description"] = v.description; 
    j["lastModifiedTs"] = v.lastModifiedTs; 
    j["role"] = v.role; 
    j["clubKey"] = v.clubKey; 
    j["motd"] = v.motd; 
  }
  inline void from_json(const json& j, ClubDataDto& v) {
    v.name = j.at("name").get<std::string>(); 
    v.createdTs = j.at("createdTs").get<int64_t>(); 
    v.jid = j.at("jid").get<std::string>(); 
    v.tag = j.at("tag").get<std::string>(); 
    v.permissionMap = j.at("permissionMap").get<ClubPermissions>(); 
    v.description = j.at("description").get<std::string>(); 
    v.lastModifiedTs = j.at("lastModifiedTs").get<int64_t>(); 
    v.role = j.at("role").get<std::string>(); 
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.motd = j.at("motd").get<std::string>(); 
  }
}