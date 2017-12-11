#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyPlayerUpdateType { /**/ 
    Direct_e = 1, /**/ 
    None_e = 0, /**/ 
    RMS_e = 3, /**/ 
    ServiceProxy_e = 2, /**/ 
  };
  static void to_json(json& j, const LolLobbyPlayerUpdateType& v) {
    switch(v) { 
    case LolLobbyPlayerUpdateType::Direct_e:
      j = "Direct";
    break;
    case LolLobbyPlayerUpdateType::None_e:
      j = "None";
    break;
    case LolLobbyPlayerUpdateType::RMS_e:
      j = "RMS";
    break;
    case LolLobbyPlayerUpdateType::ServiceProxy_e:
      j = "ServiceProxy";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyPlayerUpdateType& v) {
    auto s = j.get<std::string>(); 
    if(s == "Direct") {
      v = LolLobbyPlayerUpdateType::Direct_e;
      return;
    } 
    if(s == "None") {
      v = LolLobbyPlayerUpdateType::None_e;
      return;
    } 
    if(s == "RMS") {
      v = LolLobbyPlayerUpdateType::RMS_e;
      return;
    } 
    if(s == "ServiceProxy") {
      v = LolLobbyPlayerUpdateType::ServiceProxy_e;
      return;
    } 
  }
} 