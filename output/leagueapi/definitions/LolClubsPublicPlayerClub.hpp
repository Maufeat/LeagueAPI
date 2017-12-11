#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolClubsPublicClubMemberLists.hpp>"

namespace leagueapi {
  struct LolClubsPublicPlayerClub { /**/ 
    std::string key;/**/
    LolClubsPublicClubMemberLists members;/**/
  };
  static void to_json(json& j, const LolClubsPublicPlayerClub& v) { 
    j["key"] = v.key;
    j["members"] = v.members;
  }
  static void from_json(const json& j, LolClubsPublicPlayerClub& v) { 
    v.key = j.at("key").get<std::string>(); 
    v.members = j.at("members").get<LolClubsPublicClubMemberLists>(); 
  }
} 