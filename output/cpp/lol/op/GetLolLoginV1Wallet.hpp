#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLoginLoginSessionWallet.hpp>
namespace lol {
  Result<LolLoginLoginSessionWallet> GetLolLoginV1Wallet(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-login/v1/wallet?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}