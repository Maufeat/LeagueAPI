#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolCollectionsCollectionsSummonerBackdropType {  
    default_e = 0,
    highest_mastery_e = 3,
    recently_played_e = 2,
    summoner_icon_e = 1,
  };
  void to_json(json& j, const LolCollectionsCollectionsSummonerBackdropType& v) {
  if(v == LolCollectionsCollectionsSummonerBackdropType::default_e) {
    j = "default";
    return;
  }
  if(v == LolCollectionsCollectionsSummonerBackdropType::highest_mastery_e) {
    j = "highest-mastery";
    return;
  }
  if(v == LolCollectionsCollectionsSummonerBackdropType::recently_played_e) {
    j = "recently-played";
    return;
  }
  if(v == LolCollectionsCollectionsSummonerBackdropType::summoner_icon_e) {
    j = "summoner-icon";
    return;
  }
  }
  void from_json(const json& j, LolCollectionsCollectionsSummonerBackdropType& v) {
  if(j.get<std::string>() == "default") {
    v = LolCollectionsCollectionsSummonerBackdropType::default_e;
    return;
  } 
  if(j.get<std::string>() == "highest-mastery") {
    v = LolCollectionsCollectionsSummonerBackdropType::highest_mastery_e;
    return;
  } 
  if(j.get<std::string>() == "recently-played") {
    v = LolCollectionsCollectionsSummonerBackdropType::recently_played_e;
    return;
  } 
  if(j.get<std::string>() == "summoner-icon") {
    v = LolCollectionsCollectionsSummonerBackdropType::summoner_icon_e;
    return;
  } 
  }
}