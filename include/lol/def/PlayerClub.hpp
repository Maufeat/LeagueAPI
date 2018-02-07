#pragma once
#include "../base_def.hpp" 
#include "ClubRole.hpp"
#include "ClubMemberLists.hpp"
#include "ClubMember.hpp"
#include "ClubPermissions.hpp"
namespace lol {
  struct PlayerClub { 
    std::string key;
    std::string name;
    std::string description;
    std::string motd;
    ClubMember owner;
    std::string tag;
    int64_t created;
    int64_t lastModified;
    std::string jid;
    ClubRole role;
    bool primary;
    bool isClubTagEligible;
    ClubPermissions permissions;
    ClubMemberLists members; 
  };
  inline void to_json(json& j, const PlayerClub& v) {
    j["key"] = v.key; 
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["motd"] = v.motd; 
    j["owner"] = v.owner; 
    j["tag"] = v.tag; 
    j["created"] = v.created; 
    j["lastModified"] = v.lastModified; 
    j["jid"] = v.jid; 
    j["role"] = v.role; 
    j["primary"] = v.primary; 
    j["isClubTagEligible"] = v.isClubTagEligible; 
    j["permissions"] = v.permissions; 
    j["members"] = v.members; 
  }
  inline void from_json(const json& j, PlayerClub& v) {
    v.key = j.at("key").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.motd = j.at("motd").get<std::string>(); 
    v.owner = j.at("owner").get<ClubMember>(); 
    v.tag = j.at("tag").get<std::string>(); 
    v.created = j.at("created").get<int64_t>(); 
    v.lastModified = j.at("lastModified").get<int64_t>(); 
    v.jid = j.at("jid").get<std::string>(); 
    v.role = j.at("role").get<ClubRole>(); 
    v.primary = j.at("primary").get<bool>(); 
    v.isClubTagEligible = j.at("isClubTagEligible").get<bool>(); 
    v.permissions = j.at("permissions").get<ClubPermissions>(); 
    v.members = j.at("members").get<ClubMemberLists>(); 
  }
}