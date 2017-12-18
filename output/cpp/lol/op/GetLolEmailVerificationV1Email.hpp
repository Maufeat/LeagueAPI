#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolEmailVerificationEmailVerificationSession.hpp"
namespace lol {
  inline Result<LolEmailVerificationEmailVerificationSession> GetLolEmailVerificationV1Email(LeagueClient& _client)
  {
    try {
      return Result<LolEmailVerificationEmailVerificationSession> {
        _client.https.request("get", "/lol-email-verification/v1/email?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolEmailVerificationEmailVerificationSession> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolEmailVerificationV1Email(LeagueClient& _client, std::function<void(LeagueClient&,const Result<LolEmailVerificationEmailVerificationSession>&)> cb)
  {
    _client.httpsa.request("get", "/lol-email-verification/v1/email?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolEmailVerificationEmailVerificationSession> { response });
          else
            cb(_client,Result<LolEmailVerificationEmailVerificationSession> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}