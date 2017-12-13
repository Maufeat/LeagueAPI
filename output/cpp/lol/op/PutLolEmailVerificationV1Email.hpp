#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolEmailVerificationEmailUpdate.hpp>
namespace lol {
  Result<json> PutLolEmailVerificationV1Email(const LeagueClient& _client, const LolEmailVerificationEmailUpdate& EmailUpdate)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-email-verification/v1/email?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(EmailUpdate).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}