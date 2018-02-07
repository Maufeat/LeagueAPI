#pragma once
#include "../base_def.hpp" 
#include "ClubPermissions.hpp"
namespace lol {
  struct ClubDataDto { 
    std::string clubKey;
    std::string name;
    std::string tag;
    std::string description;
    std::string motd;
    int64_t createdTs;
    int64_t lastModifiedTs;
    std::string jid;
    std::string role;
    ClubPermissions permissionMap; 
  };
  inline void to_json(json& j, const ClubDataDto& v) {
    j["clubKey"] = v.clubKey; 
    j["name"] = v.name; 
    j["tag"] = v.tag; 
    j["description"] = v.description; 
    j["motd"] = v.motd; 
    j["createdTs"] = v.createdTs; 
    j["lastModifiedTs"] = v.lastModifiedTs; 
    j["jid"] = v.jid; 
    j["role"] = v.role; 
    j["permissionMap"] = v.permissionMap; 
  }
  inline void from_json(const json& j, ClubDataDto& v) {
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.tag = j.at("tag").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.motd = j.at("motd").get<std::string>(); 
    v.createdTs = j.at("createdTs").get<int64_t>(); 
    v.lastModifiedTs = j.at("lastModifiedTs").get<int64_t>(); 
    v.jid = j.at("jid").get<std::string>(); 
    v.role = j.at("role").get<std::string>(); 
    v.permissionMap = j.at("permissionMap").get<ClubPermissions>(); 
  }
}