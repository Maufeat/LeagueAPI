#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class GameQueuesLcdsAllowSpectators { /**/ 
    ALL_e = 3, /**/ 
    DROPINONLY_e = 2, /**/ 
    LOBBYONLY_e = 1, /**/ 
    NONE_e = 0, /**/ 
  };
  static void to_json(json& j, const GameQueuesLcdsAllowSpectators& v) {
    switch(v) { 
    case GameQueuesLcdsAllowSpectators::ALL_e:
      j = "ALL";
    break;
    case GameQueuesLcdsAllowSpectators::DROPINONLY_e:
      j = "DROPINONLY";
    break;
    case GameQueuesLcdsAllowSpectators::LOBBYONLY_e:
      j = "LOBBYONLY";
    break;
    case GameQueuesLcdsAllowSpectators::NONE_e:
      j = "NONE";
    break;
    };
  }
  static void from_json(const json& j, GameQueuesLcdsAllowSpectators& v) {
    auto s = j.get<std::string>(); 
    if(s == "ALL") {
      v = GameQueuesLcdsAllowSpectators::ALL_e;
      return;
    } 
    if(s == "DROPINONLY") {
      v = GameQueuesLcdsAllowSpectators::DROPINONLY_e;
      return;
    } 
    if(s == "LOBBYONLY") {
      v = GameQueuesLcdsAllowSpectators::LOBBYONLY_e;
      return;
    } 
    if(s == "NONE") {
      v = GameQueuesLcdsAllowSpectators::NONE_e;
      return;
    } 
  }
} 