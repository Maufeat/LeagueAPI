#pragma once
#include "../base_def.hpp" 
#include "ClubMemberLists.hpp"
#include "ClubRole.hpp"
#include "ClubPermissions.hpp"
#include "ClubMember.hpp"
namespace lol {
  struct PlayerClub { 
    bool primary;
    ClubPermissions permissions;
    bool isClubTagEligible;
    int64_t lastModified;
    std::string name;
    std::string jid;
    ClubMember owner;
    ClubMemberLists members;
    std::string key;
    int64_t created;
    std::string description;
    ClubRole role;
    std::string tag;
    std::string motd; 
  };
  inline void to_json(json& j, const PlayerClub& v) {
    j["primary"] = v.primary; 
    j["permissions"] = v.permissions; 
    j["isClubTagEligible"] = v.isClubTagEligible; 
    j["lastModified"] = v.lastModified; 
    j["name"] = v.name; 
    j["jid"] = v.jid; 
    j["owner"] = v.owner; 
    j["members"] = v.members; 
    j["key"] = v.key; 
    j["created"] = v.created; 
    j["description"] = v.description; 
    j["role"] = v.role; 
    j["tag"] = v.tag; 
    j["motd"] = v.motd; 
  }
  inline void from_json(const json& j, PlayerClub& v) {
    v.primary = j.at("primary").get<bool>(); 
    v.permissions = j.at("permissions").get<ClubPermissions>(); 
    v.isClubTagEligible = j.at("isClubTagEligible").get<bool>(); 
    v.lastModified = j.at("lastModified").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.jid = j.at("jid").get<std::string>(); 
    v.owner = j.at("owner").get<ClubMember>(); 
    v.members = j.at("members").get<ClubMemberLists>(); 
    v.key = j.at("key").get<std::string>(); 
    v.created = j.at("created").get<int64_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.role = j.at("role").get<ClubRole>(); 
    v.tag = j.at("tag").get<std::string>(); 
    v.motd = j.at("motd").get<std::string>(); 
  }
}