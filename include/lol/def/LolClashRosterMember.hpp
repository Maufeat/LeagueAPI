#pragma once
#include "../base_def.hpp" 
#include "LolClashRosterMemberState.hpp"
#include "LolClashBiddingData.hpp"
#include "Position.hpp"
namespace lol {
  struct LolClashRosterMember { 
    LolClashBiddingData biddingData;
    Position position;
    LolClashRosterMemberState state;
    uint64_t replacedSummonerId;
    bool isSubstitute;
    bool isSubbedOut;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolClashRosterMember& v) {
    j["biddingData"] = v.biddingData; 
    j["position"] = v.position; 
    j["state"] = v.state; 
    j["replacedSummonerId"] = v.replacedSummonerId; 
    j["isSubstitute"] = v.isSubstitute; 
    j["isSubbedOut"] = v.isSubbedOut; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolClashRosterMember& v) {
    v.biddingData = j.at("biddingData").get<LolClashBiddingData>(); 
    v.position = j.at("position").get<Position>(); 
    v.state = j.at("state").get<LolClashRosterMemberState>(); 
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>(); 
    v.isSubstitute = j.at("isSubstitute").get<bool>(); 
    v.isSubbedOut = j.at("isSubbedOut").get<bool>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}