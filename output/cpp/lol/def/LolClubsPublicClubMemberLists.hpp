#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClubsPublicClubPlayer.hpp>
namespace lol {
  struct LolClubsPublicClubMemberLists { 
    std::vector<LolClubsPublicClubPlayer> activeMembers; 
  };
  void to_json(json& j, const LolClubsPublicClubMemberLists& v) {
    j["activeMembers"] = v.activeMembers; 
  }
  void from_json(const json& j, LolClubsPublicClubMemberLists& v) {
    v.activeMembers = j.at("activeMembers").get<std::vector<LolClubsPublicClubPlayer>>(); 
  }
}