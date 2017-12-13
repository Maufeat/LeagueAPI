#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClubPermissions.hpp>
namespace lol {
  struct ClubDataDto { 
    std::string tag;
    std::string motd;
    std::string clubKey;
    int64_t createdTs;
    std::string role;
    std::string jid;
    std::string description;
    std::string name;
    ClubPermissions permissionMap;
    int64_t lastModifiedTs; 
  };
  void to_json(json& j, const ClubDataDto& v) {
  j["tag"] = v.tag; 
  j["motd"] = v.motd; 
  j["clubKey"] = v.clubKey; 
  j["createdTs"] = v.createdTs; 
  j["role"] = v.role; 
  j["jid"] = v.jid; 
  j["description"] = v.description; 
  j["name"] = v.name; 
  j["permissionMap"] = v.permissionMap; 
  j["lastModifiedTs"] = v.lastModifiedTs; 
  }
  void from_json(const json& j, ClubDataDto& v) {
  v.tag = j.at("tag").get<std::string>(); 
  v.motd = j.at("motd").get<std::string>(); 
  v.clubKey = j.at("clubKey").get<std::string>(); 
  v.createdTs = j.at("createdTs").get<int64_t>(); 
  v.role = j.at("role").get<std::string>(); 
  v.jid = j.at("jid").get<std::string>(); 
  v.description = j.at("description").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  v.permissionMap = j.at("permissionMap").get<ClubPermissions>(); 
  v.lastModifiedTs = j.at("lastModifiedTs").get<int64_t>(); 
  }
}