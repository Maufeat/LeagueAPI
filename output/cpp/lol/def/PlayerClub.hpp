#pragma once
#include "../base_def.hpp" 
#include "ClubPermissions.hpp"
#include "ClubMemberLists.hpp"
#include "ClubMember.hpp"
#include "ClubRole.hpp"
namespace lol {
  struct PlayerClub { 
    std::string motd;
    bool isClubTagEligible;
    bool primary;
    std::string jid;
    std::string name;
    ClubPermissions permissions;
    std::string key;
    int64_t lastModified;
    std::string tag;
    ClubRole role;
    int64_t created;
    ClubMember owner;
    std::string description;
    ClubMemberLists members; 
  };
  inline void to_json(json& j, const PlayerClub& v) {
    j["motd"] = v.motd; 
    j["isClubTagEligible"] = v.isClubTagEligible; 
    j["primary"] = v.primary; 
    j["jid"] = v.jid; 
    j["name"] = v.name; 
    j["permissions"] = v.permissions; 
    j["key"] = v.key; 
    j["lastModified"] = v.lastModified; 
    j["tag"] = v.tag; 
    j["role"] = v.role; 
    j["created"] = v.created; 
    j["owner"] = v.owner; 
    j["description"] = v.description; 
    j["members"] = v.members; 
  }
  inline void from_json(const json& j, PlayerClub& v) {
    v.motd = j.at("motd").get<std::string>(); 
    v.isClubTagEligible = j.at("isClubTagEligible").get<bool>(); 
    v.primary = j.at("primary").get<bool>(); 
    v.jid = j.at("jid").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.permissions = j.at("permissions").get<ClubPermissions>(); 
    v.key = j.at("key").get<std::string>(); 
    v.lastModified = j.at("lastModified").get<int64_t>(); 
    v.tag = j.at("tag").get<std::string>(); 
    v.role = j.at("role").get<ClubRole>(); 
    v.created = j.at("created").get<int64_t>(); 
    v.owner = j.at("owner").get<ClubMember>(); 
    v.description = j.at("description").get<std::string>(); 
    v.members = j.at("members").get<ClubMemberLists>(); 
  }
}