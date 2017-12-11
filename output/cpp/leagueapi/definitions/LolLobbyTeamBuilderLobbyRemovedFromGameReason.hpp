#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderLobbyRemovedFromGameReason { /**/ 
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
  static void to_json(json& j, const LolLobbyTeamBuilderLobbyRemovedFromGameReason& v) {
    switch(v) { 
    case LolLobbyTeamBuilderLobbyRemovedFromGameReason::Disbanded_e:
      j = "Disbanded";
    break;
    case LolLobbyTeamBuilderLobbyRemovedFromGameReason::GameStartError_e:
      j = "GameStartError";
    break;
    case LolLobbyTeamBuilderLobbyRemovedFromGameReason::Kicked_e:
      j = "Kicked";
    break;
    case LolLobbyTeamBuilderLobbyRemovedFromGameReason::Left_e:
      j = "Left";
    break;
    case LolLobbyTeamBuilderLobbyRemovedFromGameReason::None_e:
      j = "None";
    break;
    case LolLobbyTeamBuilderLobbyRemovedFromGameReason::Other_e:
      j = "Other";
    break;
    case LolLobbyTeamBuilderLobbyRemovedFromGameReason::ServiceError_e:
      j = "ServiceError";
    break;
    case LolLobbyTeamBuilderLobbyRemovedFromGameReason::ServiceShutdown_e:
      j = "ServiceShutdown";
    break;
    case LolLobbyTeamBuilderLobbyRemovedFromGameReason::Timeout_e:
      j = "Timeout";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyTeamBuilderLobbyRemovedFromGameReason& v) {
    auto s = j.get<std::string>(); 
    if(s == "Disbanded") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Disbanded_e;
      return;
    } 
    if(s == "GameStartError") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::GameStartError_e;
      return;
    } 
    if(s == "Kicked") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Kicked_e;
      return;
    } 
    if(s == "Left") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Left_e;
      return;
    } 
    if(s == "None") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::None_e;
      return;
    } 
    if(s == "Other") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Other_e;
      return;
    } 
    if(s == "ServiceError") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::ServiceError_e;
      return;
    } 
    if(s == "ServiceShutdown") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::ServiceShutdown_e;
      return;
    } 
    if(s == "Timeout") {
      v = LolLobbyTeamBuilderLobbyRemovedFromGameReason::Timeout_e;
      return;
    } 
  }
} 