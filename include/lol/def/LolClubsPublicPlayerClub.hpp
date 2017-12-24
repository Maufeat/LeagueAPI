#pragma once
#include "../base_def.hpp" 
#include "LolClubsPublicClubMemberLists.hpp"
namespace lol {
  struct LolClubsPublicPlayerClub { 
    std::string key;
    LolClubsPublicClubMemberLists members; 
  };
  inline void to_json(json& j, const LolClubsPublicPlayerClub& v) {
    j["key"] = v.key; 
    j["members"] = v.members; 
  }
  inline void from_json(const json& j, LolClubsPublicPlayerClub& v) {
    v.key = j.at("key").get<std::string>(); 
    v.members = j.at("members").get<LolClubsPublicClubMemberLists>(); 
  }
}