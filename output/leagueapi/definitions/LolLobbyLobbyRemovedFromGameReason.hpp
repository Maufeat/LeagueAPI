#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyLobbyRemovedFromGameReason { /**/ 
    Disbanded_e = 2, /**/ 
    GameStartError_e = 7, /**/ 
    Kicked_e = 1, /**/ 
    Left_e = 3, /**/ 
    None_e = 0, /**/ 
    Other_e = 5, /**/ 
    ServiceError_e = 4, /**/ 
    ServiceShutdown_e = 8, /**/ 
    Timeout_e = 6, /**/ 
  };
  static void to_json(json& j, const LolLobbyLobbyRemovedFromGameReason& v) {
    switch(v) { 
    case LolLobbyLobbyRemovedFromGameReason::Disbanded_e:
      j = "Disbanded";
    break;
    case LolLobbyLobbyRemovedFromGameReason::GameStartError_e:
      j = "GameStartError";
    break;
    case LolLobbyLobbyRemovedFromGameReason::Kicked_e:
      j = "Kicked";
    break;
    case LolLobbyLobbyRemovedFromGameReason::Left_e:
      j = "Left";
    break;
    case LolLobbyLobbyRemovedFromGameReason::None_e:
      j = "None";
    break;
    case LolLobbyLobbyRemovedFromGameReason::Other_e:
      j = "Other";
    break;
    case LolLobbyLobbyRemovedFromGameReason::ServiceError_e:
      j = "ServiceError";
    break;
    case LolLobbyLobbyRemovedFromGameReason::ServiceShutdown_e:
      j = "ServiceShutdown";
    break;
    case LolLobbyLobbyRemovedFromGameReason::Timeout_e:
      j = "Timeout";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyLobbyRemovedFromGameReason& v) {
    auto s = j.get<std::string>(); 
    if(s == "Disbanded") {
      v = LolLobbyLobbyRemovedFromGameReason::Disbanded_e;
      return;
    } 
    if(s == "GameStartError") {
      v = LolLobbyLobbyRemovedFromGameReason::GameStartError_e;
      return;
    } 
    if(s == "Kicked") {
      v = LolLobbyLobbyRemovedFromGameReason::Kicked_e;
      return;
    } 
    if(s == "Left") {
      v = LolLobbyLobbyRemovedFromGameReason::Left_e;
      return;
    } 
    if(s == "None") {
      v = LolLobbyLobbyRemovedFromGameReason::None_e;
      return;
    } 
    if(s == "Other") {
      v = LolLobbyLobbyRemovedFromGameReason::Other_e;
      return;
    } 
    if(s == "ServiceError") {
      v = LolLobbyLobbyRemovedFromGameReason::ServiceError_e;
      return;
    } 
    if(s == "ServiceShutdown") {
      v = LolLobbyLobbyRemovedFromGameReason::ServiceShutdown_e;
      return;
    } 
    if(s == "Timeout") {
      v = LolLobbyLobbyRemovedFromGameReason::Timeout_e;
      return;
    } 
  }
} 