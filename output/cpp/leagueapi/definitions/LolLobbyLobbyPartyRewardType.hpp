#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyLobbyPartyRewardType { /**/ 
    Icon_e = 2, /**/ 
    Ip_e = 1, /**/ 
    None_e = 9999, /**/ 
  };
  static void to_json(json& j, const LolLobbyLobbyPartyRewardType& v) {
    switch(v) { 
    case LolLobbyLobbyPartyRewardType::Icon_e:
      j = "Icon";
    break;
    case LolLobbyLobbyPartyRewardType::Ip_e:
      j = "Ip";
    break;
    case LolLobbyLobbyPartyRewardType::None_e:
      j = "None";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyLobbyPartyRewardType& v) {
    auto s = j.get<std::string>(); 
    if(s == "Icon") {
      v = LolLobbyLobbyPartyRewardType::Icon_e;
      return;
    } 
    if(s == "Ip") {
      v = LolLobbyLobbyPartyRewardType::Ip_e;
      return;
    } 
    if(s == "None") {
      v = LolLobbyLobbyPartyRewardType::None_e;
      return;
    } 
  }
} 