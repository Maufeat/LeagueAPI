#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClubsPublicClubMemberLists.hpp>
namespace lol {
  struct LolClubsPublicPlayerClub { 
    LolClubsPublicClubMemberLists members;
    std::string key; 
  };
  void to_json(json& j, const LolClubsPublicPlayerClub& v) {
    j["members"] = v.members; 
    j["key"] = v.key; 
  }
  void from_json(const json& j, LolClubsPublicPlayerClub& v) {
    v.members = j.at("members").get<LolClubsPublicClubMemberLists>(); 
    v.key = j.at("key").get<std::string>(); 
  }
}