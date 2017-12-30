#pragma once
#include "../base_def.hpp" 
#include "ClubMember.hpp"
#include "ClubMemberLists.hpp"
#include "ClubPermissions.hpp"
#include "ClubRole.hpp"
namespace lol {
  struct PlayerClub { 
    std::string name;
    int64_t created;
    std::string tag;
    std::string description;
    std::string key;
    ClubMember owner;
    int64_t lastModified;
    std::string motd;
    std::string jid;
    ClubRole role;
    ClubMemberLists members;
    bool isClubTagEligible;
    ClubPermissions permissions;
    bool primary; 
  };
  inline void to_json(json& j, const PlayerClub& v) {
    j["name"] = v.name; 
    j["created"] = v.created; 
    j["tag"] = v.tag; 
    j["description"] = v.description; 
    j["key"] = v.key; 
    j["owner"] = v.owner; 
    j["lastModified"] = v.lastModified; 
    j["motd"] = v.motd; 
    j["jid"] = v.jid; 
    j["role"] = v.role; 
    j["members"] = v.members; 
    j["isClubTagEligible"] = v.isClubTagEligible; 
    j["permissions"] = v.permissions; 
    j["primary"] = v.primary; 
  }
  inline void from_json(const json& j, PlayerClub& v) {
    v.name = j.at("name").get<std::string>(); 
    v.created = j.at("created").get<int64_t>(); 
    v.tag = j.at("tag").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.key = j.at("key").get<std::string>(); 
    v.owner = j.at("owner").get<ClubMember>(); 
    v.lastModified = j.at("lastModified").get<int64_t>(); 
    v.motd = j.at("motd").get<std::string>(); 
    v.jid = j.at("jid").get<std::string>(); 
    v.role = j.at("role").get<ClubRole>(); 
    v.members = j.at("members").get<ClubMemberLists>(); 
    v.isClubTagEligible = j.at("isClubTagEligible").get<bool>(); 
    v.permissions = j.at("permissions").get<ClubPermissions>(); 
    v.primary = j.at("primary").get<bool>(); 
  }
}