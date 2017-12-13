#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/Position.hpp>
#include <lol/def/LolClashRosterMemberState.hpp>
#include <lol/def/LolClashBiddingData.hpp>
namespace lol {
  struct LolClashRosterMember { 
    LolClashBiddingData biddingData;
    uint64_t replacedSummonerId;
    bool isSubstitute;
    LolClashRosterMemberState state;
    bool isSubbedOut;
    Position position;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolClashRosterMember& v) {
  j["biddingData"] = v.biddingData; 
  j["replacedSummonerId"] = v.replacedSummonerId; 
  j["isSubstitute"] = v.isSubstitute; 
  j["state"] = v.state; 
  j["isSubbedOut"] = v.isSubbedOut; 
  j["position"] = v.position; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolClashRosterMember& v) {
  v.biddingData = j.at("biddingData").get<LolClashBiddingData>(); 
  v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>(); 
  v.isSubstitute = j.at("isSubstitute").get<bool>(); 
  v.state = j.at("state").get<LolClashRosterMemberState>(); 
  v.isSubbedOut = j.at("isSubbedOut").get<bool>(); 
  v.position = j.at("position").get<Position>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}