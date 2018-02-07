#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterMemberState.hpp"
#include "Position.hpp"
#include "LolClashBiddingData.hpp"
namespace lol {
  struct LolClashRosterMember { 
    uint64_t summonerId;
    LolClashBiddingData biddingData;
    LolClashRosterMemberState state;
    Position position;
    uint64_t replacedSummonerId;
    bool isSubstitute;
    bool isSubbedOut; 
  };
  inline void to_json(json& j, const LolClashRosterMember& v) {
    j["summonerId"] = v.summonerId; 
    j["biddingData"] = v.biddingData; 
    j["state"] = v.state; 
    j["position"] = v.position; 
    j["replacedSummonerId"] = v.replacedSummonerId; 
    j["isSubstitute"] = v.isSubstitute; 
    j["isSubbedOut"] = v.isSubbedOut; 
  }
  inline void from_json(const json& j, LolClashRosterMember& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.biddingData = j.at("biddingData").get<LolClashBiddingData>(); 
    v.state = j.at("state").get<LolClashRosterMemberState>(); 
    v.position = j.at("position").get<Position>(); 
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>(); 
    v.isSubstitute = j.at("isSubstitute").get<bool>(); 
    v.isSubbedOut = j.at("isSubbedOut").get<bool>(); 
  }
}