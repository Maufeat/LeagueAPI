#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLeaguesLeagueEmblem.hpp>"
#include "<leagueapi/definitions/LolLeaguesMiniseries.hpp>"

namespace leagueapi {
  struct LolLeaguesLeagueStanding { /**/ 
    bool inactive;/**/
    int64_t apexDaysUntilDecay;/**/
    std::string id;/**/
    uint64_t previousPosition;/**/
    std::string name;/**/
    std::vector<LolLeaguesLeagueEmblem> emblems;/**/
    uint64_t wins;/**/
    uint64_t losses;/**/
    bool pendingDemotion;/**/
    uint64_t position;/**/
    int64_t positionDelta;/**/
    bool pendingPromotion;/**/
    int64_t points;/**/
    std::string inactivityStatus;/**/
    std::vector<LolLeaguesMiniseries> miniseriesResults;/**/
  };
  static void to_json(json& j, const LolLeaguesLeagueStanding& v) { 
    j["inactive"] = v.inactive;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["id"] = v.id;
    j["previousPosition"] = v.previousPosition;
    j["name"] = v.name;
    j["emblems"] = v.emblems;
    j["wins"] = v.wins;
    j["losses"] = v.losses;
    j["pendingDemotion"] = v.pendingDemotion;
    j["position"] = v.position;
    j["positionDelta"] = v.positionDelta;
    j["pendingPromotion"] = v.pendingPromotion;
    j["points"] = v.points;
    j["inactivityStatus"] = v.inactivityStatus;
    j["miniseriesResults"] = v.miniseriesResults;
  }
  static void from_json(const json& j, LolLeaguesLeagueStanding& v) { 
    v.inactive = j.at("inactive").get<bool>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>(); 
    v.id = j.at("id").get<std::string>(); 
    v.previousPosition = j.at("previousPosition").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem>>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.pendingDemotion = j.at("pendingDemotion").get<bool>(); 
    v.position = j.at("position").get<uint64_t>(); 
    v.positionDelta = j.at("positionDelta").get<int64_t>(); 
    v.pendingPromotion = j.at("pendingPromotion").get<bool>(); 
    v.points = j.at("points").get<int64_t>(); 
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>(); 
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries>>(); 
  }
} 