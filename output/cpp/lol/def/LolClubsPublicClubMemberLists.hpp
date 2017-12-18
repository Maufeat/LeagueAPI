#pragma once
#include "../base_def.hpp" 
#include "LolClubsPublicClubPlayer.hpp"
namespace lol {
  struct LolClubsPublicClubMemberLists { 
    std::vector<LolClubsPublicClubPlayer> activeMembers; 
  };
  inline void to_json(json& j, const LolClubsPublicClubMemberLists& v) {
    j["activeMembers"] = v.activeMembers; 
  }
  inline void from_json(const json& j, LolClubsPublicClubMemberLists& v) {
    v.activeMembers = j.at("activeMembers").get<std::vector<LolClubsPublicClubPlayer>>(); 
  }
}