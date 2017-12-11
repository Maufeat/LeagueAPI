#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolCollectionsCollectionsSummonerBackdropType { /**/ 
    default_e = 0, /**/ 
    highest_mastery_e = 3, /**/ 
    recently_played_e = 2, /**/ 
    summoner_icon_e = 1, /**/ 
  };
  static void to_json(json& j, const LolCollectionsCollectionsSummonerBackdropType& v) {
    switch(v) { 
    case LolCollectionsCollectionsSummonerBackdropType::default_e:
      j = "default";
    break;
    case LolCollectionsCollectionsSummonerBackdropType::highest_mastery_e:
      j = "highest-mastery";
    break;
    case LolCollectionsCollectionsSummonerBackdropType::recently_played_e:
      j = "recently-played";
    break;
    case LolCollectionsCollectionsSummonerBackdropType::summoner_icon_e:
      j = "summoner-icon";
    break;
    };
  }
  static void from_json(const json& j, LolCollectionsCollectionsSummonerBackdropType& v) {
    auto s = j.get<std::string>(); 
    if(s == "default") {
      v = LolCollectionsCollectionsSummonerBackdropType::default_e;
      return;
    } 
    if(s == "highest-mastery") {
      v = LolCollectionsCollectionsSummonerBackdropType::highest_mastery_e;
      return;
    } 
    if(s == "recently-played") {
      v = LolCollectionsCollectionsSummonerBackdropType::recently_played_e;
      return;
    } 
    if(s == "summoner-icon") {
      v = LolCollectionsCollectionsSummonerBackdropType::summoner_icon_e;
      return;
    } 
  }
} 