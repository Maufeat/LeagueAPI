#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolEmailVerificationEmailUpdate.hpp>
namespace lol {
  inline Result<json> PutLolEmailVerificationV1Email(const LeagueClient& _client, const LolEmailVerificationEmailUpdate& EmailUpdate)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/lol-email-verification/v1/email?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(EmailUpdate).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}