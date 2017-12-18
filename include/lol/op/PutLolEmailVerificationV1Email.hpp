#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolEmailVerificationEmailUpdate.hpp"
namespace lol {
  inline Result<json> PutLolEmailVerificationV1Email(LeagueClient& _client, const LolEmailVerificationEmailUpdate& EmailUpdate)
  {
    try {
      return ToResult<json>(_client.https.request("put", "/lol-email-verification/v1/email?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(EmailUpdate).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void PutLolEmailVerificationV1Email(LeagueClient& _client, const LolEmailVerificationEmailUpdate& EmailUpdate, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("put", "/lol-email-verification/v1/email?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(EmailUpdate).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}