#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<bool> GetLolPlayerPreferencesV1PlayerPreferencesReady(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-player-preferences/v1/player-preferences-ready?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}