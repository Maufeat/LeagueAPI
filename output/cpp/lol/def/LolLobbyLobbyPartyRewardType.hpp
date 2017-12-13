#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLobbyLobbyPartyRewardType {  
    Icon_e = 2,
    Ip_e = 1,
    None_e = 9999,
  };
  void to_json(json& j, const LolLobbyLobbyPartyRewardType& v) {
  if(v == LolLobbyLobbyPartyRewardType::Icon_e) {
    j = "Icon";
    return;
  }
  if(v == LolLobbyLobbyPartyRewardType::Ip_e) {
    j = "Ip";
    return;
  }
  if(v == LolLobbyLobbyPartyRewardType::None_e) {
    j = "None";
    return;
  }
  }
  void from_json(const json& j, LolLobbyLobbyPartyRewardType& v) {
  if(j.get<std::string>() == "Icon") {
    v = LolLobbyLobbyPartyRewardType::Icon_e;
    return;
  } 
  if(j.get<std::string>() == "Ip") {
    v = LolLobbyLobbyPartyRewardType::Ip_e;
    return;
  } 
  if(j.get<std::string>() == "None") {
    v = LolLobbyLobbyPartyRewardType::None_e;
    return;
  } 
  }
}