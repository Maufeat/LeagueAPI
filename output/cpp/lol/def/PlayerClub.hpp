#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClubRole.hpp>
#include <lol/def/ClubPermissions.hpp>
#include <lol/def/ClubMember.hpp>
#include <lol/def/ClubMemberLists.hpp>
namespace lol {
  struct PlayerClub { 
    std::string tag;
    std::string motd;
    int64_t lastModified;
    ClubRole role;
    bool primary;
    ClubPermissions permissions;
    std::string name;
    std::string description;
    ClubMemberLists members;
    std::string jid;
    std::string key;
    ClubMember owner;
    bool isClubTagEligible;
    int64_t created; 
  };
  void to_json(json& j, const PlayerClub& v) {
  j["tag"] = v.tag; 
  j["motd"] = v.motd; 
  j["lastModified"] = v.lastModified; 
  j["role"] = v.role; 
  j["primary"] = v.primary; 
  j["permissions"] = v.permissions; 
  j["name"] = v.name; 
  j["description"] = v.description; 
  j["members"] = v.members; 
  j["jid"] = v.jid; 
  j["key"] = v.key; 
  j["owner"] = v.owner; 
  j["isClubTagEligible"] = v.isClubTagEligible; 
  j["created"] = v.created; 
  }
  void from_json(const json& j, PlayerClub& v) {
  v.tag = j.at("tag").get<std::string>(); 
  v.motd = j.at("motd").get<std::string>(); 
  v.lastModified = j.at("lastModified").get<int64_t>(); 
  v.role = j.at("role").get<ClubRole>(); 
  v.primary = j.at("primary").get<bool>(); 
  v.permissions = j.at("permissions").get<ClubPermissions>(); 
  v.name = j.at("name").get<std::string>(); 
  v.description = j.at("description").get<std::string>(); 
  v.members = j.at("members").get<ClubMemberLists>(); 
  v.jid = j.at("jid").get<std::string>(); 
  v.key = j.at("key").get<std::string>(); 
  v.owner = j.at("owner").get<ClubMember>(); 
  v.isClubTagEligible = j.at("isClubTagEligible").get<bool>(); 
  v.created = j.at("created").get<int64_t>(); 
  }
}