#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/BuybackState.hpp>"

namespace leagueapi {
  struct BuybackMember { /**/ 
    int32_t pay;/**/
    uint64_t playerId;/**/
    BuybackState buybackState;/**/
    int32_t bet;/**/
  };
  static void to_json(json& j, const BuybackMember& v) { 
    j["pay"] = v.pay;
    j["playerId"] = v.playerId;
    j["buybackState"] = v.buybackState;
    j["bet"] = v.bet;
  }
  static void from_json(const json& j, BuybackMember& v) { 
    v.pay = j.at("pay").get<int32_t>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.buybackState = j.at("buybackState").get<BuybackState>(); 
    v.bet = j.at("bet").get<int32_t>(); 
  }
} 