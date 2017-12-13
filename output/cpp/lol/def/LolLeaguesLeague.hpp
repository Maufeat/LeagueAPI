#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesLeagueRank.hpp>
#include <lol/def/LolLeaguesLeagueDivision.hpp>
#include <lol/def/LolLeaguesLeagueQueueType.hpp>
#include <lol/def/LolLeaguesLeagueTier.hpp>
namespace lol {
  struct LolLeaguesLeague { 
    std::string leagueName;
    std::vector<LolLeaguesLeagueDivision> leagues;
    LolLeaguesLeagueQueueType queueType;
    std::string name;
    LolLeaguesLeagueRank requesterLeagueRank;
    LolLeaguesLeagueTier leagueTier;
    uint64_t challengerNextPromotionUpdateInMs; 
  };
  void to_json(json& j, const LolLeaguesLeague& v) {
  j["leagueName"] = v.leagueName; 
  j["leagues"] = v.leagues; 
  j["queueType"] = v.queueType; 
  j["name"] = v.name; 
  j["requesterLeagueRank"] = v.requesterLeagueRank; 
  j["leagueTier"] = v.leagueTier; 
  j["challengerNextPromotionUpdateInMs"] = v.challengerNextPromotionUpdateInMs; 
  }
  void from_json(const json& j, LolLeaguesLeague& v) {
  v.leagueName = j.at("leagueName").get<std::string>(); 
  v.leagues = j.at("leagues").get<std::vector<LolLeaguesLeagueDivision>>(); 
  v.queueType = j.at("queueType").get<LolLeaguesLeagueQueueType>(); 
  v.name = j.at("name").get<std::string>(); 
  v.requesterLeagueRank = j.at("requesterLeagueRank").get<LolLeaguesLeagueRank>(); 
  v.leagueTier = j.at("leagueTier").get<LolLeaguesLeagueTier>(); 
  v.challengerNextPromotionUpdateInMs = j.at("challengerNextPromotionUpdateInMs").get<uint64_t>(); 
  }
}